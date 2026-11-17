
#include <nn/types.h>

#include "ImageDbTypes.h"
#include "SysMakerNote.h"















namespace imgdb {
void SysMakerNote::Initialize()
{   // locals: { ImageDbRecordParam sRecParam; }



    // imgdb::DateTimeSeconds::SetCurrentDateTime() called here




        // imgdb::ImageDbRecordParam::Initialize() called here



        // imgdb::SysMakerNote::SetDistinctionTypeBit() inlined here

}



































































ShootingType SysMakerNote::GetShootingType() const
{
	const ShootingType eType =
		static_cast<ShootingType>((nCharacterFlag & 0xf80) >> 7);
	return eType;
}

void SysMakerNote::SetShootingType(ShootingType eType)
{   // inferred scope start


}




DistinctionTypeBit SysMakerNote::GetDistinctionTypeBit() const
{
    const DistinctionTypeBit eBit =
		static_cast<DistinctionTypeBit>((nCharacterFlag << 12) >> 24);
	return eBit;
}

void SysMakerNote::SetDistinctionTypeBit(DistinctionTypeBit eBit)
{
	nCharacterFlag &= 0xf0000fff;
	nCharacterFlag |= eBit << 12;
}
} // namespace imgdb
