//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ICBulkLyricsInfoRequest
{
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 itemIDs:(id)arg2 useLongIDs:(_Bool)arg3;	// IMP=0x0040000000034f4c
- (id)_bodyDataForItemIDs:(id)arg1 useLongIDs:(_Bool)arg2;	// IMP=0x0040000000034ca0
- (id)canonicalResponseForResponse:(id)arg1;	// IMP=0x0010000000034bfc
- (id)initWithDatabaseID:(unsigned int)arg1 itemIDs:(id)arg2 useLongIDs:(_Bool)arg3;	// IMP=0x0010000000034b0f

@end

