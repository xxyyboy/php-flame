#pragma once

namespace flame {
namespace http {
	class client_response: public php::class_base {
	public:
		static void declare(php::extension_entry& ext);
		php::value to_string(php::parameters& params);
		// 声明为 ZEND_ACC_PRIVATE 禁止创建（不会被调用）
		php::value __construct(php::parameters& params);
	private:
		void build_ex(boost::beast::http::message<false, value_body<false>>& ctr_);
		friend class _connection_pool;
	};
}
}
