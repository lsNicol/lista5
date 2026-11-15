async function logarUser(name, senha) {
  await new Promise((resolve) => setTimeout(resolve, 1500));
  if (name.length === senha.toString().length)
    return {name: name, senha: senha}.
  else
    throw new Error("Usuário inválido!");
}
async function executar(name, senha) {
  try{
    console.log("Verificando dados...");
    const dados = await loginUser(name, senha);
    console.log(`Bem vindo ${name}...`);
  } catch (erro){
    console.error(`Falha no login:  ${erro.message}`);
    
  }
}
executar("Nicolas", 1234);
