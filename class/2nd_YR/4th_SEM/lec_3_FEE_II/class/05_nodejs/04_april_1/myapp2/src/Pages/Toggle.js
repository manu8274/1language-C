import React from 'react'
import { useState } from 'react'

export default function Toggle() {
    let [val,setval]=useState('hello');
    function changeval(){
        if(val==='hello'){
            setval('hi');
        }
        else{
            setval('hello');
        }
    }
  return (
    <div>
      <h2>{val}</h2>
      <button onClick={changeval}>CLICK TO TOGGLE</button>
    </div>
  )
}
