//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SagaAddItemToPlaylistOperation
{
    unsigned long long _itemSagaID;	// 8 = 0x8
    long long _playlistPersistentID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000010201e
- (void)main;	// IMP=0x0020000000101485
- (_Bool)isPersistent;	// IMP=0x001000000010147d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001013de
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000010133a
- (id)initWithConfiguration:(id)arg1 itemSagaID:(unsigned long long)arg2 playlistPersistentID:(long long)arg3 clientIdentity:(id)arg4;	// IMP=0x00100000001012e1
- (id)initWithItemSagaID:(unsigned long long)arg1 playlistPersistentID:(long long)arg2;	// IMP=0x0010000000101267

@end

