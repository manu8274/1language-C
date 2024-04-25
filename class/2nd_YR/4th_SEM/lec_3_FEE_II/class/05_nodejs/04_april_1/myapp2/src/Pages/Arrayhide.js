import React from 'react'
import { useState } from 'react';

export default function Arrayhide() {
    let obj=[
        {id:0,name:'alok',city:'noida',email:'alok123@gmail.com'},
        {id:1,name:'shubham',city:'punjab',email:'shu123@gmail.com'},
        {id:2,name:'manas',city:'panipat',email:'man123@gmail.com'},
    ];
    var [data,setData]= useState(obj);
    function remove(id){
      let d=data.filter((element)=>{
        return element.id !== id;
      })
      setData(d);
    }
  return (
    <div>
      {
        data.map((element)=>{
          return(
            <h3 key={element.id} > Name:{element.name}, City:{element.city}, Email:{element.email}
            <button onClick={()=>remove(element.id)}>DELETE</button></h3>
          );
        })
      }
    </div>
  )
}
