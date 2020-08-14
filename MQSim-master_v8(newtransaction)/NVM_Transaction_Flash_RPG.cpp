#include "NVM_Transaction_Flash_RPG.h"
#include "src/nvm_chip/NVM_Types.h"

namespace SSD_Components
{
	NVM_Transaction_Flash_RPG::NVM_Transaction_Flash_RPG(Transaction_Source_Type source, stream_id_type stream_id,
		unsigned int data_size_in_byte, LPA_type lpa, PPA_type ppa, const NVM::FlashMemory::Physical_Page_Address& address,
		SSD_Components::User_Request* related_user_IO_request,
		NVM::memory_content_type content, NVM_Transaction_Flash_WR* related_write, page_status_type read_sectors_bitmap, data_timestamp_type data_timestamp) :
		NVM_Transaction_Flash(source, Transaction_Type::RPG, stream_id, data_size_in_byte, lpa, ppa, address, related_user_IO_request, IO_Flow_Priority_Class::UNDEFINED),
		Content(content), RelatedWrite(related_write), read_sectors_bitmap(read_sectors_bitmap), DataTimeStamp(data_timestamp)
	{
	}

}