//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ICBulkSetItemPropertyRequest
{
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 itemIDs:(id)arg2 properties:(id)arg3 useLongIDs:(_Bool)arg4;	// IMP=0x00400000000a31db
- (id)_bodyDataForItemIDs:(id)arg1 properties:(id)arg2 useLongIDs:(_Bool)arg3;	// IMP=0x00400000000a2c53
- (id)initWithDatabaseID:(unsigned int)arg1 itemIDs:(id)arg2 properties:(id)arg3 useLongIDs:(_Bool)arg4;	// IMP=0x00100000000a2b47

@end
