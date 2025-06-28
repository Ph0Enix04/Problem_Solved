set number
set relativenumber
set tabstop=4
set shiftwidth=4
set autoindent
set mouse=a
call plug#begin('~/.vim/plugged')

" List your plugins here
Plug 'junegunn/vim-plug'
Plug 'vim-scripts/UltiSnips'
Plug 'itmammoth/doorboy.vim'
Plug 'preservim/nerdcommenter'
call plug#end()

" Use <tab> for triggering snippets
let g:UltiSnipsExpandTrigger='<tab>'
let g:UltiSnipsJumpForwardTrigger='<tab>'
let g:UltiSnipsJumpBackwardTrigger='<s-tab>'
let g:UltiSnipsListSnippets='<c-l>'

map <C-a> <esc>gg0VG<CR>
nnoremap <F8> :w<CR>:!g++ % -o %<.out && ./%<.out<CR>
source $VIMRUNTIME/mswin.vim
behave mswin
nnoremap <Leader>c :s/^/\/\//<CR>
vnoremap <Leader>c :s/^/\/\//<CR>gv
nnoremap <Leader>u :s/^\/\///<CR>
vnoremap <Leader>u :s/^\/\///<CR>gv
nnoremap <leader>y ggVG"+y

