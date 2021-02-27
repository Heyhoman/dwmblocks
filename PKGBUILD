pkgname=dwmblocks
pkgver=63.96cbb45
pkgrel=1
pkgdesc="Modular status bar for dwm written in c"
arch=('x86_64')
url="https://github.com/torrinfail/dwmblocks"
license=('ISC')
depends=('libx11')
options=(zipman)
source=("$pkgname::git+https://github.com/torrinfail/dwmblocks.git"
	blocks.h)
sha256sums=('SKIP'
            '442e54ac69c6ef629072cc3505b33abc24c25dc1b1737d016db9d718eb8cf15e')
pkgver() {
  cd "$srcdir/$pkgname"
  printf "%s.%s" "$(git rev-list --count HEAD)" "$(git rev-parse --short HEAD)"
}

prepare() {
  cd "$srcdir/$pkgname"
  cp "$srcdir/blocks.h" blocks.h
}

build() {
  cd "$srcdir/$pkgname"
  make X11INC=/usr/include/X11 X11LIB=/usr/lib/X11
}

package() {
  cd "$srcdir/$pkgname"
  make PREFIX=/usr DESTDIR="$pkgdir" install
  install -m644 -D LICENSE "$pkgdir/usr/share/licenses/$pkgname/LICENSE"
  install -m644 -D README.md "$pkgdir/usr/share/doc/$pkgname/README"
}
