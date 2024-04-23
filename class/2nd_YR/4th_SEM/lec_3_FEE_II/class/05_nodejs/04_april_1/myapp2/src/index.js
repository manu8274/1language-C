import React from 'react';
import ReactDOM from 'react-dom/client';
import { BrowserRouter, Routes, Route} from 'react-router-dom';
import './index.css';
import App from './App';
import reportWebVitals from './reportWebVitals';
import About from './Pages/About';
import Contact from './Pages/Contact';
import Home from './Pages/Home'
import Array from './Pages/Array'
import Table from './Pages/Table';
import Table_with_arg from './Pages/Table_with_arg';
import Welcome from './Pages/Welcome';
import Login from './Pages/Login';
import Logout from './Pages/Logout';
import { ReactSession} from 'react-client-session'
import Toggle from './Pages/Toggle';
import Counter from './Pages/Counter';

const root = ReactDOM.createRoot(document.getElementById('root'));
let u=ReactSession.get("logged_user");
root.render(
  // let u = ReactSession.get("logged_user");
  <BrowserRouter>
  <App />
  <Routes>
  <Route path='/' element={<Home/>} />
    <Route path='/about' element={<About/>} />
    <Route path='/contact' element={<Contact/>} />
    <Route path='/array' element={<Array/>} />
    <Route path='/table' element={<Table/>} />
    <Route path='/table_with_arg' element={<Table_with_arg/>} />
    <Route path='/Welcome' element={<Welcome user="MANASVI"/>} />
    <Route path='/login' element={<Login/>} />
    <Route path='/logout' element={<Logout/>} />
    <Route path='/toggle' element={<Toggle/>} />
    <Route path='/counter' element={<Counter/>} />
  </Routes>
  </BrowserRouter>
);

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals();
