//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICCloudItemIDList, NSDictionary;

@interface SagaUpdatePlaylistOperation
{
    long long _playlistPersistentID;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
    ICCloudItemIDList *_trackList;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000937fe
- (void).cxx_destruct;	// IMP=0x0020000000093768
- (void)main;	// IMP=0x0010000000092dee
- (_Bool)isPersistent;	// IMP=0x0010000000092de6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000092d0f
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000092900
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 playlistPersistentID:(long long)arg3 properties:(id)arg4 trackList:(id)arg5;	// IMP=0x001000000009281c
- (id)initWithClientIdentity:(id)arg1 playlistPersistentID:(long long)arg2 properties:(id)arg3 trackList:(id)arg4;	// IMP=0x001000000009276c

@end

