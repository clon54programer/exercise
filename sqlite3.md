## base de dato en sqlite3

## crear base de datos

```sql
sqlite3 <nombre_de_la_base_De_datos>
```

## para que se muestre el archivo

> .databases

esto mostrara la base de datos

## creado una tabla

>  create table curso10(id INT primary key,nombre text,notas INT);
>  create table nombre_de_tabla(parametros de la tabla)

este es el comando

## agregar un dato a una tabla

> insert into curso10(nombre,notas) values('juan danilo',5);
> insert into nombre_de_tabla(columnas) values(datos a agregas);

## hacer una consulta de datos

> select nombre,notas from curso10;
> select columnas from nombre_de_la_tabla