import React from 'react'

export default function Array() {
    let data=[
        {name:'ALOK',city:'NOIDA',email:'alok123@gmail.com'},
        {name:'SURESH',city:'DELHI',email:'suresh321@gmail.com'},
    ];
  return (
    <div>
      <h2>DATA FROM ARRAY</h2>
      {
        data.map((element)=><h3>Name : {element.name} , CITY : {element.city} , email : {element.email}</h3>)
      }
    </div>
  )
}
