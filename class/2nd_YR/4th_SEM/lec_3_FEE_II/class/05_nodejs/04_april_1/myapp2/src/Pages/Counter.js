import React from 'react'
import { useState } from 'react'
import './Counter.css'

export default function Counter() {
    let [c,setc]=useState(0);
    function inc(){
        setc(c+1);
    }
    function dec(){
        setc(c-1);
    }
    function reset(){
        setc(0);
    }
  return (
    <div>
      <div class="container">
        <h2>{c}</h2>
        <button class="inc" onClick={inc}>INCREMENT</button><br></br>
        <button class="dec" onClick={dec}>DECREMENT</button><br></br>
        <button class="res" onClick={reset}>RESET</button><br></br>
      </div>
    </div>
  )
}
