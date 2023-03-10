//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICCloudItemIDList, NSDictionary;

@interface SagaCreatePlaylistOperation
{
    long long _playlistPersistentID;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
    ICCloudItemIDList *_trackList;	// 24 = 0x18
    unsigned long long _playlistSagaID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000001cf21
- (void).cxx_destruct;	// IMP=0x002000000001ce85
@property(readonly, nonatomic) unsigned long long playlistSagaID; // @synthesize playlistSagaID=_playlistSagaID;
- (void)main;	// IMP=0x001000000001c2f6
- (_Bool)isPersistent;	// IMP=0x001000000001c2ee
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001c230
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001c0ae
- (id)requestWithDatabaseID:(unsigned int)arg1 databaseRevision:(unsigned int)arg2 playlistProperties:(id)arg3 trackList:(id)arg4;	// IMP=0x001000000001c095
- (id)initWithConfiguration:(id)arg1 playlistPersistentID:(long long)arg2 properties:(id)arg3 trackList:(id)arg4 clientIdentity:(id)arg5;	// IMP=0x001000000001bfd6
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 playlistPersistentID:(long long)arg3 properties:(id)arg4 trackList:(id)arg5;	// IMP=0x001000000001bfaa

@end

