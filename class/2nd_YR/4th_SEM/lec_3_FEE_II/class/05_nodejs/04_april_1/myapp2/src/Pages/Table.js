import React from 'react'

export default function Table() {
  function show()
  {
  let num = parseInt(prompt("enter number"));
  let result=' ';
  for(let i=1;i<=10;i++){
      let prod=num*i;
      result +=`${num} x ${i} = ${prod} <br>`;
  }
  document.getElementById('table').innerHTML=result;
}
  return (
    <div>
      <h2>CLICK HERE to generate table ! &nbsp; <button onClick={show}>SHOW TABLE</button> </h2>
      <div id='table'></div>
    </div>
  )
}
