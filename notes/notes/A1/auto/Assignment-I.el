(TeX-add-style-hook
 "Assignment-I"
 (lambda ()
   (TeX-add-to-alist 'LaTeX-provided-class-options
                     '(("article" "10pt")))
   (TeX-add-to-alist 'LaTeX-provided-package-options
                     '(("inputenc" "utf8") ("footmisc" "symbol")))
   (add-to-list 'LaTeX-verbatim-environments-local "lstlisting")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "lstinline")
   (add-to-list 'LaTeX-verbatim-macros-with-delims-local "lstinline")
   (TeX-run-style-hooks
    "latex2e"
    "article"
    "art10"
    "inputenc"
    "amsthm"
    "amsmath"
    "mathtools"
    "amsfonts"
    "amssymb"
    "graphicx"
    "verbatim"
    "fancyhdr"
    "listings"
    "algorithm"
    "algpseudocode"
    "geometry"
    "tcolorbox"
    "footmisc"
    "caption"
    "tikz"
    "tikz-qtree"
    "mathrsfs")
   (TeX-add-symbols
    '("Lim" 2)
    '("Frac" 2)
    '("abs" 1)
    '("lr" 2)
    '("set" 1)
    "e"
    "R"
    "N"
    "Q"
    "I"
    "Z"
    "Prob"
    "Ex"
    "var"
    "cov"
    "Oh")
   (LaTeX-add-lengths
    "tindent")
   (LaTeX-add-amsthm-newtheorems
    "pic"
    "lem"
    "thm"
    "cor"
    "ex"
    "defn"
    "prob"
    "con"
    "rem"
    "cex"
    "ts"
    "claim"))
 :latex)

