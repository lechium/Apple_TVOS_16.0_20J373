//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CloudLibraryConnection, ICConnectionConfiguration, ICUserIdentity;

@interface SagaImporter : NSObject
{
    _Bool _isCancelled;	// 8 = 0x8
    float _progress;	// 12 = 0xc
    CloudLibraryConnection *_connection;	// 16 = 0x10
    ICConnectionConfiguration *_configuration;	// 24 = 0x18
    ICUserIdentity *_userIdentity;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000090ee7
@property(readonly, copy, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) CloudLibraryConnection *connection; // @synthesize connection=_connection;
- (_Bool)_updateGlobalPlaylistsFromContainersPayloadAtPath:(id)arg1 downloadPathForSubscribedContainersPayload:(id)arg2 clientIdentity:(id)arg3;	// IMP=0x0010000000090c4f
- (void)_importLyricsWithLyricsTokenMap:(id)arg1 clientIdentity:(id)arg2;	// IMP=0x0010000000090b07
- (void)_removeUnavailableSubscriptionAssetsInLibrary:(id)arg1;	// IMP=0x0010000000090a80
- (void)importTracksFromRevision:(unsigned int)arg1 toRevision:(unsigned int)arg2 clientIdentity:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008f03a
- (void)cancel;	// IMP=0x001000000008ef6b
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000008ee33

@end
