#pragma once
#include "../url.h"

namespace flame::http {
	class client_request: public php::class_base {
	public:
		static void declare(php::extension_entry& ext);
		php::value __construct(php::parameters& params);
	private:
		void build_url();
		void build_ex(boost::beast::http::message<true, value_body<true>>& ctr_);
		std::shared_ptr<url> url_;
		friend class client;
		friend class _connection_pool;
    };
}
