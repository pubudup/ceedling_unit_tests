## 🧰 Prerequisites

- macOS or Linux (Windows WSL also works)
- Ruby (recommended via Homebrew or rbenv)
- Ceedling installed via `gem`

### Install Ruby (Homebrew method):

```bash
brew install ruby
echo 'export PATH="/opt/homebrew/opt/ruby/bin:$PATH"' >> ~/.zshrc
source ~/.zshrc
```

### Install Ceedling:
```bash
gem install ceedling
```

### Run tests:
```bash
ceedling test:all
```
