/*
Copyright 2022 Bouazza SAADEDDINE

This file is part of TorchCSD.

TorchCSD is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

TorchCSD is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with TorchCSD.  If not, see <https://www.gnu.org/licenses/>.
*/



#pragma once
#include <torch/torch.h>

namespace csd {
namespace modules {
namespace layers {
namespace autograd {
struct ComplexCallLayer : public torch::autograd::Function<ComplexCallLayer> {
  static torch::autograd::variable_list
  forward(torch::autograd::AutogradContext *, torch::Tensor, torch::Tensor, torch::Tensor, torch::Tensor, double);
  static torch::autograd::variable_list
  backward(torch::autograd::AutogradContext *, torch::autograd::variable_list);
};

struct ComplexPutFromCallLayer : public torch::autograd::Function<ComplexPutFromCallLayer> {
  static torch::autograd::variable_list
  forward(torch::autograd::AutogradContext *, torch::Tensor, torch::Tensor, torch::Tensor, torch::Tensor, double);
  static torch::autograd::variable_list
  backward(torch::autograd::AutogradContext *, torch::autograd::variable_list);
};
} // namespace autograd
} // namespace layers
} // namespace modules
} // namespace csd