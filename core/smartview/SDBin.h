#pragma once
#include <core/smartview/block/block.h>
#include <core/smartview/block/blockBytes.h>

namespace smartview
{
	class SDBin : public block
	{
	public:
		~SDBin();

		void Init(_In_opt_ LPMAPIPROP lpMAPIProp, bool bFB) noexcept;

	private:
		void parse() override;
		void parseBlocks() override;

		LPMAPIPROP m_lpMAPIProp{};
		bool m_bFB{};
		std::shared_ptr<blockBytes> m_SDbin = emptyBB();
	};
} // namespace smartview