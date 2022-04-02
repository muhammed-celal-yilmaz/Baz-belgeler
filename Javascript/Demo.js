
alert("Hosgeldiniz...");
var email=prompt("E-mail?");
var sifre=prompt("Sifre?");

var kullanicilar=[
    {email:"xyz@gmail.com",sifre:"123"},
    {email:"abc@gmail.com",sifre:"456"}
]

var twitler=[
    {email:"xyz@gmail.com",twit:"Hava yağmurlu."},
    {email:"abc@gmail.com",sifre:"Hava güneşli"}
]

function kullaniciVarmi(email,sifre){
    for(i=0;i<kullanicilar.length;i++){
        if((kullanicilar[i].email==email && kullanicilar[i].sifre==sifre)){
            return true;
        }
    }
    return false;
}

function giris(){
    if(kullaniciVarmi(email,sifre)){
        console.log(twitler)
    }else{
        console.log("Kullanıcı adı veya sifresi hatalı !")
    } 
}

giris(email,sifre);