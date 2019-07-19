create database projeto;
use projeto;

create table Funcionario(
	CodFunc int auto_increment primary key,
    Nome varchar(100) not null,
    CPF char(14) not null,
    Email varchar(100),
    Senha varchar(12) not null
);

create table Administrador(
	CodAdmin int auto_increment primary key,
    Nome varchar(100) not null,
    SenhaPessoal varchar(12) not null,
    Senha varchar(12) not null
);

create table Produto(
	CodProduto int auto_increment primary key,
    Nome varchar(80) not null,
    Modelo varchar(80) default 'Sem modelo',
    Descricao varchar(80) default 'Sem descrição',
    Quantidade int not null,
    Preco float not null
);

create table Pedidos(
	CodPedido int auto_increment primary key,
    Quantidade int not null,
    CodProduto int not null,
    CodClientes int not null,
    Mes varchar(9),
    Ano varchar(5)
);

ALTER TABLE `projeto`.`Pedidos` 
ADD INDEX `CodProduto_idx` (`CodProduto` ASC);
ALTER TABLE `projeto`.`Pedidos` 
ADD CONSTRAINT `CodProduto`
  FOREIGN KEY (`CodProduto`)
  REFERENCES `projeto`.`Produto` (`CodProduto`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION;
  
create table Cliente(
	CodCliente int auto_increment primary key ,
    Nome varchar(100) not null,
    CPF char(14) not null,
    Email varchar(100)
);

ALTER TABLE `projeto`.`Pedidos` 
ADD INDEX `CodCliente_idx` (`CodClientes` ASC);
ALTER TABLE `projeto`.`Pedidos` 
ADD CONSTRAINT `CodCliente`
  FOREIGN KEY (`CodClientes`)
  REFERENCES `projeto`.`Cliente` (`CodCliente`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION;

  
CREATE TABLE Ganhos(
	CodGanhos int auto_increment primary key,
    GanhoMes float not null,
    CodPedido int not null
);

ALTER TABLE `projeto`.`Ganhos` 
ADD INDEX `fk_Ganhos_1_idx` (`CodPedido` ASC);
ALTER TABLE `projeto`.`Ganhos` 
ADD CONSTRAINT `fk_Ganhos_1`
  FOREIGN KEY (`CodPedido`)
  REFERENCES `projeto`.`Pedidos` (`CodPedido`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION;
  
insert into Administrador(Nome,SenhaPessoal,Senha) values ('admin','admin','admin');
