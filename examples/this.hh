class RNG {
  private int $seed = 0;
  public function setSeed(int $seed): RNG {
    $this->seed = $seed;
    return $this;
  }
}


class SpecialRNG extends RNG {
      public function generateSpecial(): int {
// ... 
    }
}

function main(): void {
  $rng = new SpecialRNG();
  $special = $rng->setSeed(1234)->generateSpecial();
}


class RNG {
  private int $seed = 0;
  public function setSeed(int $seed): this {
    $this->seed = $seed;
    return $this;
  }
// ... 
}
