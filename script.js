const largDiv = document.getElementById("largDiv");
const email = document.getElementById("email");

const value = email.textContent;
if (value.length > 24){
  newValue = value.slice(0, 20).padEnd(22, ".");
  email.textContent = newValue;
}

// Captura todos os campos que têm a classe editavel
const camposEditaveis = document.querySelectorAll('.editavel');

camposEditaveis.forEach(campo => {
  // Quando o usuário terminar de editar e clicar fora
  campo.addEventListener('blur', () => {
    const valorAtualizado = campo.textContent.trim();
    
    // Mostra no console o que foi alterado para você testar
    console.log(`Campo atualizado:`, campo.className, `| Novo valor:`, valorAtualizado);
    
    // Se for o campo de email, você pode re-aplicar sua lógica de corte se quiser,
    // mas lembre-se de salvar o valor real completo em algum lugar antes de cortar!
  });

  // Salva e sai do modo de edição se o usuário apertar Enter
  campo.addEventListener('keydown', (event) => {
    if (event.key === 'Enter') {
      event.preventDefault(); // Impede a quebra de linha indesejada no HTML
      campo.blur(); // Remove o foco do campo, disparando o evento 'blur' configurado acima
    }
  });
});

