// Generated by rstantools.  Do not edit by hand.

/*
    epipool is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    epipool is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with epipool.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#ifndef USE_STANC3
#define USE_STANC3
#endif
#include <rstan/rstaninc.hpp>
// Code generated by stanc v2.26.1-1-g67504470
#include <stan/model/model_header.hpp>
namespace model_mod1_timepoint_namespace {
inline void validate_positive_index(const char* var_name, const char* expr,
                                    int val) {
  if (val < 1) {
    std::stringstream msg;
    msg << "Found dimension size less than one in simplex declaration"
        << "; variable=" << var_name << "; dimension size expression=" << expr
        << "; expression value=" << val;
    std::string msg_str(msg.str());
    throw std::invalid_argument(msg_str.c_str());
  }
}
inline void validate_unit_vector_index(const char* var_name, const char* expr,
                                       int val) {
  if (val <= 1) {
    std::stringstream msg;
    if (val == 1) {
      msg << "Found dimension size one in unit vector declaration."
          << " One-dimensional unit vector is discrete"
          << " but the target distribution must be continuous."
          << " variable=" << var_name << "; dimension size expression=" << expr;
    } else {
      msg << "Found dimension size less than one in unit vector declaration"
          << "; variable=" << var_name << "; dimension size expression=" << expr
          << "; expression value=" << val;
    }
    std::string msg_str(msg.str());
    throw std::invalid_argument(msg_str.c_str());
  }
}
using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using std::pow;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::model_base_crtp;
using stan::model::rvalue;
using stan::model::cons_list;
using stan::model::index_uni;
using stan::model::index_max;
using stan::model::index_min;
using stan::model::index_min_max;
using stan::model::index_multi;
using stan::model::index_omni;
using stan::model::nil_index_list;
using namespace stan::math;
using stan::math::pow; 
stan::math::profile_map profiles__;
static int current_statement__= 0;
static const std::vector<string> locations_array__ = {" (found before start of program)",
                                                      " (in 'string', line 20, column 2 to column 31)",
                                                      " (in 'string', line 21, column 2 to column 30)",
                                                      " (in 'string', line 24, column 2 to column 69)",
                                                      " (in 'string', line 25, column 2 to column 43)",
                                                      " (in 'string', line 27, column 4 to column 106)",
                                                      " (in 'string', line 26, column 15 to line 28, column 3)",
                                                      " (in 'string', line 26, column 2 to line 28, column 3)",
                                                      " (in 'string', line 32, column 2 to column 56)",
                                                      " (in 'string', line 33, column 2 to column 36)",
                                                      " (in 'string', line 37, column 6 to column 56)",
                                                      " (in 'string', line 36, column 17 to line 38, column 5)",
                                                      " (in 'string', line 36, column 4 to line 38, column 5)",
                                                      " (in 'string', line 41, column 6 to column 59)",
                                                      " (in 'string', line 40, column 22 to line 42, column 5)",
                                                      " (in 'string', line 40, column 4 to line 42, column 5)",
                                                      " (in 'string', line 34, column 18 to line 43, column 3)",
                                                      " (in 'string', line 34, column 2 to line 43, column 3)",
                                                      " (in 'string', line 3, column 2 to column 8)",
                                                      " (in 'string', line 4, column 2 to column 10)",
                                                      " (in 'string', line 5, column 8 to column 9)",
                                                      " (in 'string', line 5, column 2 to column 22)",
                                                      " (in 'string', line 6, column 8 to column 9)",
                                                      " (in 'string', line 6, column 2 to column 18)",
                                                      " (in 'string', line 7, column 8 to column 9)",
                                                      " (in 'string', line 7, column 2 to column 17)",
                                                      " (in 'string', line 8, column 8 to column 9)",
                                                      " (in 'string', line 8, column 2 to column 17)",
                                                      " (in 'string', line 10, column 2 to column 24)",
                                                      " (in 'string', line 11, column 8 to column 14)",
                                                      " (in 'string', line 11, column 2 to column 39)",
                                                      " (in 'string', line 12, column 8 to column 14)",
                                                      " (in 'string', line 12, column 2 to column 39)",
                                                      " (in 'string', line 14, column 2 to column 23)",
                                                      " (in 'string', line 15, column 2 to column 28)",
                                                      " (in 'string', line 16, column 2 to column 12)",
                                                      " (in 'string', line 17, column 2 to column 16)",
                                                      " (in 'string', line 20, column 8 to column 11)",
                                                      " (in 'string', line 24, column 8 to column 11)",
                                                      " (in 'string', line 25, column 8 to column 9)"};
#include <stan_meta_header.hpp>
class model_mod1_timepoint final : public model_base_crtp<model_mod1_timepoint> {
private:
  int N;
  int N_t;
  std::vector<int> rank_t;
  std::vector<double> s;
  std::vector<int> n;
  std::vector<int> k;
  int J_sens;
  std::vector<int> y_sens;
  std::vector<int> n_sens;
  std::vector<double> p_sens;
  std::vector<double> p_intercept;
  double spec;
  int inference;
 
public:
  ~model_mod1_timepoint() { }
  
  inline std::string model_name() const final { return "model_mod1_timepoint"; }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.26.1-1-g67504470", "stancflags = "};
  }
  
  
  model_mod1_timepoint(stan::io::var_context& context__,
                       unsigned int random_seed__ = 0,
                       std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static const char* function__ = "model_mod1_timepoint_namespace::model_mod1_timepoint";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      current_statement__ = 18;
      context__.validate_dims("data initialization","N","int",
          context__.to_vec());
      N = std::numeric_limits<int>::min();
      
      current_statement__ = 18;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 19;
      context__.validate_dims("data initialization","N_t","int",
          context__.to_vec());
      N_t = std::numeric_limits<int>::min();
      
      current_statement__ = 19;
      N_t = context__.vals_i("N_t")[(1 - 1)];
      current_statement__ = 20;
      validate_non_negative_index("rank_t", "N", N);
      current_statement__ = 21;
      context__.validate_dims("data initialization","rank_t","int",
          context__.to_vec(N));
      rank_t = std::vector<int>(N, std::numeric_limits<int>::min());
      
      current_statement__ = 21;
      assign(rank_t, nil_index_list(), context__.vals_i("rank_t"),
        "assigning variable rank_t");
      current_statement__ = 22;
      validate_non_negative_index("s", "N", N);
      current_statement__ = 23;
      context__.validate_dims("data initialization","s","double",
          context__.to_vec(N));
      s = std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 23;
      assign(s, nil_index_list(), context__.vals_r("s"),
        "assigning variable s");
      current_statement__ = 24;
      validate_non_negative_index("n", "N", N);
      current_statement__ = 25;
      context__.validate_dims("data initialization","n","int",
          context__.to_vec(N));
      n = std::vector<int>(N, std::numeric_limits<int>::min());
      
      current_statement__ = 25;
      assign(n, nil_index_list(), context__.vals_i("n"),
        "assigning variable n");
      current_statement__ = 26;
      validate_non_negative_index("k", "N", N);
      current_statement__ = 27;
      context__.validate_dims("data initialization","k","int",
          context__.to_vec(N));
      k = std::vector<int>(N, std::numeric_limits<int>::min());
      
      current_statement__ = 27;
      assign(k, nil_index_list(), context__.vals_i("k"),
        "assigning variable k");
      current_statement__ = 28;
      context__.validate_dims("data initialization","J_sens","int",
          context__.to_vec());
      J_sens = std::numeric_limits<int>::min();
      
      current_statement__ = 28;
      J_sens = context__.vals_i("J_sens")[(1 - 1)];
      current_statement__ = 28;
      current_statement__ = 28;
      check_greater_or_equal(function__, "J_sens", J_sens, 0);
      current_statement__ = 29;
      validate_non_negative_index("y_sens", "J_sens", J_sens);
      current_statement__ = 30;
      context__.validate_dims("data initialization","y_sens","int",
          context__.to_vec(J_sens));
      y_sens = std::vector<int>(J_sens, std::numeric_limits<int>::min());
      
      current_statement__ = 30;
      assign(y_sens, nil_index_list(), context__.vals_i("y_sens"),
        "assigning variable y_sens");
      current_statement__ = 30;
      for (int sym1__ = 1; sym1__ <= J_sens; ++sym1__) {
        current_statement__ = 30;
        current_statement__ = 30;
        check_greater_or_equal(function__, "y_sens[sym1__]",
                               y_sens[(sym1__ - 1)], 0);}
      current_statement__ = 31;
      validate_non_negative_index("n_sens", "J_sens", J_sens);
      current_statement__ = 32;
      context__.validate_dims("data initialization","n_sens","int",
          context__.to_vec(J_sens));
      n_sens = std::vector<int>(J_sens, std::numeric_limits<int>::min());
      
      current_statement__ = 32;
      assign(n_sens, nil_index_list(), context__.vals_i("n_sens"),
        "assigning variable n_sens");
      current_statement__ = 32;
      for (int sym1__ = 1; sym1__ <= J_sens; ++sym1__) {
        current_statement__ = 32;
        current_statement__ = 32;
        check_greater_or_equal(function__, "n_sens[sym1__]",
                               n_sens[(sym1__ - 1)], 0);}
      current_statement__ = 33;
      context__.validate_dims("data initialization","p_sens","double",
          context__.to_vec(2));
      p_sens = std::vector<double>(2, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 33;
      assign(p_sens, nil_index_list(), context__.vals_r("p_sens"),
        "assigning variable p_sens");
      current_statement__ = 34;
      context__.validate_dims("data initialization","p_intercept","double",
          context__.to_vec(2));
      p_intercept = std::vector<double>(2, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 34;
      assign(p_intercept, nil_index_list(), context__.vals_r("p_intercept"),
        "assigning variable p_intercept");
      current_statement__ = 35;
      context__.validate_dims("data initialization","spec","double",
          context__.to_vec());
      spec = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 35;
      spec = context__.vals_r("spec")[(1 - 1)];
      current_statement__ = 36;
      context__.validate_dims("data initialization","inference","int",
          context__.to_vec());
      inference = std::numeric_limits<int>::min();
      
      current_statement__ = 36;
      inference = context__.vals_i("inference")[(1 - 1)];
      current_statement__ = 37;
      validate_non_negative_index("logit_prev_f", "N_t", N_t);
      current_statement__ = 38;
      validate_non_negative_index("prev_f", "N_t", N_t);
      current_statement__ = 39;
      validate_non_negative_index("pool_pos", "N", N);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    num_params_r__ = 0U;
    
    try {
      num_params_r__ += N_t;
      num_params_r__ += 1;
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
  }
  template <bool propto__, bool jacobian__, typename VecR, typename VecI, stan::require_vector_like_t<VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    static const char* function__ = "model_mod1_timepoint_namespace::log_prob";
(void) function__;  // suppress unused var warning
    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      std::vector<local_scalar_t__> logit_prev_f;
      logit_prev_f = std::vector<local_scalar_t__>(N_t, DUMMY_VAR__);
      
      current_statement__ = 1;
      for (int sym1__ = 1; sym1__ <= N_t; ++sym1__) {
        current_statement__ = 1;
        assign(logit_prev_f, cons_list(index_uni(sym1__), nil_index_list()),
          in__.scalar(), "assigning variable logit_prev_f");}
      local_scalar_t__ sens;
      sens = DUMMY_VAR__;
      
      current_statement__ = 2;
      sens = in__.scalar();
      current_statement__ = 2;
      if (jacobian__) {
        current_statement__ = 2;
        sens = stan::math::lub_constrain(sens, 0, 1, lp__);
      } else {
        current_statement__ = 2;
        sens = stan::math::lub_constrain(sens, 0, 1);
      }
      std::vector<local_scalar_t__> prev_f;
      prev_f = std::vector<local_scalar_t__>(N_t, DUMMY_VAR__);
      
      current_statement__ = 3;
      assign(prev_f, nil_index_list(), inv_logit(logit_prev_f),
        "assigning variable prev_f");
      std::vector<local_scalar_t__> pool_pos;
      pool_pos = std::vector<local_scalar_t__>(N, DUMMY_VAR__);
      
      current_statement__ = 7;
      for (int i = 1; i <= N; ++i) {
        current_statement__ = 5;
        assign(pool_pos, cons_list(index_uni(i), nil_index_list()),
          (1.0 -
            pow(
              (1.0 -
                ((prev_f[(rank_t[(i - 1)] - 1)] * sens) +
                  ((1.0 - prev_f[(rank_t[(i - 1)] - 1)]) * (1.0 - spec)))),
              s[(i - 1)])), "assigning variable pool_pos");}
      current_statement__ = 3;
      for (int sym1__ = 1; sym1__ <= N_t; ++sym1__) {
        current_statement__ = 3;
        current_statement__ = 3;
        check_greater_or_equal(function__, "prev_f[sym1__]",
                               prev_f[(sym1__ - 1)], 0);}
      current_statement__ = 3;
      for (int sym1__ = 1; sym1__ <= N_t; ++sym1__) {
        current_statement__ = 3;
        current_statement__ = 3;
        check_less_or_equal(function__, "prev_f[sym1__]",
                            prev_f[(sym1__ - 1)], 1);}
      current_statement__ = 4;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 4;
        current_statement__ = 4;
        check_greater_or_equal(function__, "pool_pos[sym1__]",
                               pool_pos[(sym1__ - 1)], 0);}
      current_statement__ = 4;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 4;
        current_statement__ = 4;
        check_less_or_equal(function__, "pool_pos[sym1__]",
                            pool_pos[(sym1__ - 1)], 1);}
      {
        current_statement__ = 8;
        lp_accum__.add(
          normal_lpdf<propto__>(logit_prev_f, p_intercept[(1 - 1)],
            p_intercept[(2 - 1)]));
        current_statement__ = 9;
        lp_accum__.add(
          beta_lpdf<propto__>(sens, p_sens[(1 - 1)], p_sens[(2 - 1)]));
        current_statement__ = 17;
        if (logical_eq(inference, 1)) {
          current_statement__ = 12;
          for (int i = 1; i <= N; ++i) {
            current_statement__ = 10;
            lp_accum__.add(
              binomial_lpmf<false>(k[(i - 1)], n[(i - 1)], pool_pos[(i - 1)]));
          }
          current_statement__ = 15;
          for (int i = 1; i <= J_sens; ++i) {
            current_statement__ = 13;
            lp_accum__.add(
              binomial_lpmf<false>(y_sens[(i - 1)], n_sens[(i - 1)], sens));}
        } 
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr>
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.resize(0);
    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    static const char* function__ = "model_mod1_timepoint_namespace::write_array";
(void) function__;  // suppress unused var warning
    (void) function__;  // suppress unused var warning
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      std::vector<double> logit_prev_f;
      logit_prev_f = std::vector<double>(N_t, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 1;
      for (int sym1__ = 1; sym1__ <= N_t; ++sym1__) {
        current_statement__ = 1;
        assign(logit_prev_f, cons_list(index_uni(sym1__), nil_index_list()),
          in__.scalar(), "assigning variable logit_prev_f");}
      double sens;
      sens = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 2;
      sens = in__.scalar();
      current_statement__ = 2;
      sens = stan::math::lub_constrain(sens, 0, 1);
      std::vector<double> prev_f;
      prev_f = std::vector<double>(N_t, std::numeric_limits<double>::quiet_NaN());
      
      std::vector<double> pool_pos;
      pool_pos = std::vector<double>(N, std::numeric_limits<double>::quiet_NaN());
      
      for (int sym1__ = 1; sym1__ <= N_t; ++sym1__) {
        vars__.emplace_back(logit_prev_f[(sym1__ - 1)]);}
      vars__.emplace_back(sens);
      if (logical_negation((primitive_value(emit_transformed_parameters__) ||
            primitive_value(emit_generated_quantities__)))) {
        return ;
      } 
      current_statement__ = 3;
      assign(prev_f, nil_index_list(), inv_logit(logit_prev_f),
        "assigning variable prev_f");
      current_statement__ = 7;
      for (int i = 1; i <= N; ++i) {
        current_statement__ = 5;
        assign(pool_pos, cons_list(index_uni(i), nil_index_list()),
          (1.0 -
            pow(
              (1.0 -
                ((prev_f[(rank_t[(i - 1)] - 1)] * sens) +
                  ((1.0 - prev_f[(rank_t[(i - 1)] - 1)]) * (1.0 - spec)))),
              s[(i - 1)])), "assigning variable pool_pos");}
      current_statement__ = 3;
      for (int sym1__ = 1; sym1__ <= N_t; ++sym1__) {
        current_statement__ = 3;
        current_statement__ = 3;
        check_greater_or_equal(function__, "prev_f[sym1__]",
                               prev_f[(sym1__ - 1)], 0);}
      current_statement__ = 3;
      for (int sym1__ = 1; sym1__ <= N_t; ++sym1__) {
        current_statement__ = 3;
        current_statement__ = 3;
        check_less_or_equal(function__, "prev_f[sym1__]",
                            prev_f[(sym1__ - 1)], 1);}
      current_statement__ = 4;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 4;
        current_statement__ = 4;
        check_greater_or_equal(function__, "pool_pos[sym1__]",
                               pool_pos[(sym1__ - 1)], 0);}
      current_statement__ = 4;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 4;
        current_statement__ = 4;
        check_less_or_equal(function__, "pool_pos[sym1__]",
                            pool_pos[(sym1__ - 1)], 1);}
      if (emit_transformed_parameters__) {
        for (int sym1__ = 1; sym1__ <= N_t; ++sym1__) {
          vars__.emplace_back(prev_f[(sym1__ - 1)]);}
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          vars__.emplace_back(pool_pos[(sym1__ - 1)]);}
      } 
      if (logical_negation(emit_generated_quantities__)) {
        return ;
      } 
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, stan::require_std_vector_t<VecVar>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline void transform_inits_impl(const stan::io::var_context& context__,
                                   VecI& params_i__, VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.clear();
    vars__.reserve(num_params_r__);
    
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      std::vector<double> logit_prev_f;
      logit_prev_f = std::vector<double>(N_t, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 1;
      assign(logit_prev_f, nil_index_list(),
        context__.vals_r("logit_prev_f"), "assigning variable logit_prev_f");
      double sens;
      sens = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 2;
      sens = context__.vals_r("sens")[(1 - 1)];
      double sens_free__;
      sens_free__ = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 2;
      sens_free__ = stan::math::lub_free(sens, 0, 1);
      for (int sym1__ = 1; sym1__ <= N_t; ++sym1__) {
        vars__.emplace_back(logit_prev_f[(sym1__ - 1)]);}
      vars__.emplace_back(sens_free__);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__.clear();
    names__.emplace_back("logit_prev_f");
    names__.emplace_back("sens");
    names__.emplace_back("prev_f");
    names__.emplace_back("pool_pos");
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    dimss__.clear();
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(N_t)});
    
    dimss__.emplace_back(std::vector<size_t>{});
    
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(N_t)});
    
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(N)});
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    for (int sym1__ = 1; sym1__ <= N_t; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "logit_prev_f" + '.' + std::to_string(sym1__));
      }}
    param_names__.emplace_back(std::string() + "sens");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N_t; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "prev_f" + '.' + std::to_string(sym1__));
        }}
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "pool_pos" + '.' + std::to_string(sym1__));
        }}
    }
    
    if (emit_generated_quantities__) {
      
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    for (int sym1__ = 1; sym1__ <= N_t; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "logit_prev_f" + '.' + std::to_string(sym1__));
      }}
    param_names__.emplace_back(std::string() + "sens");
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= N_t; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "prev_f" + '.' + std::to_string(sym1__));
        }}
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "pool_pos" + '.' + std::to_string(sym1__));
        }}
    }
    
    if (emit_generated_quantities__) {
      
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"logit_prev_f\",\"type\":{\"name\":\"array\",\"length\":" << N_t << ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"sens\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"prev_f\",\"type\":{\"name\":\"array\",\"length\":" << N_t << ",\"element_type\":{\"name\":\"real\"}},\"block\":\"transformed_parameters\"},{\"name\":\"pool_pos\",\"type\":{\"name\":\"array\",\"length\":" << N << ",\"element_type\":{\"name\":\"real\"}},\"block\":\"transformed_parameters\"}]";
    return s__.str();
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"logit_prev_f\",\"type\":{\"name\":\"array\",\"length\":" << N_t << ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"},{\"name\":\"sens\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"prev_f\",\"type\":{\"name\":\"array\",\"length\":" << N_t << ",\"element_type\":{\"name\":\"real\"}},\"block\":\"transformed_parameters\"},{\"name\":\"pool_pos\",\"type\":{\"name\":\"array\",\"length\":" << N << ",\"element_type\":{\"name\":\"real\"}},\"block\":\"transformed_parameters\"}]";
    return s__.str();
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      std::vector<double> vars_vec(vars.size());
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i) {
        vars.coeffRef(i) = vars_vec[i];
      }
    }
    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }
    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }
    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }
  
    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits_impl(context, params_i, params_r_vec, pstream);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i) {
        params_r.coeffRef(i) = params_r_vec[i];
      }
    }
    inline void transform_inits(const stan::io::var_context& context,
                                std::vector<int>& params_i,
                                std::vector<double>& vars,
                                std::ostream* pstream = nullptr) const final {
      transform_inits_impl(context, params_i, vars, pstream);
    }        
};
}
using stan_model = model_mod1_timepoint_namespace::model_mod1_timepoint;
#ifndef USING_R
// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return model_mod1_timepoint_namespace::profiles__;
}
#endif
#endif
