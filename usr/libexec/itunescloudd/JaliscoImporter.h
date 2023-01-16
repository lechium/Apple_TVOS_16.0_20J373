//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CloudLibraryConnection, ICConnectionConfiguration, ML3MusicLibrary, NSString;

@interface JaliscoImporter : NSObject
{
    _Bool _isCancelled;	// 8 = 0x8
    float _progress;	// 12 = 0xc
    CloudLibraryConnection *_connection;	// 16 = 0x10
    ICConnectionConfiguration *_configuration;	// 24 = 0x18
    ML3MusicLibrary *_musicLibrary;	// 32 = 0x20
}

+ (id)oversizeLogCategory;	// IMP=0x0020000000039d65
+ (id)logCategory;	// IMP=0x0010000000039c4e
- (void).cxx_destruct;	// IMP=0x002000000003987a
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
@property(readonly, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) CloudLibraryConnection *connection; // @synthesize connection=_connection;
@property(readonly, copy) NSString *description;
- (void)importTracksUpToRevision:(unsigned int)arg1 clientIdentity:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000039100
- (void)cancel;	// IMP=0x00100000000390f6
- (void)clearNeedsUpdateForTokens;	// IMP=0x00100000000390f0
- (_Bool)needsUpdateForTokens;	// IMP=0x00100000000390e8
- (_Bool)includePreorders;	// IMP=0x00100000000390e0
- (_Bool)includeHiddenItems;	// IMP=0x00100000000390d8
- (_Bool)includeFlavors;	// IMP=0x00100000000390d0
- (unsigned int)onDiskRevision;	// IMP=0x00100000000390c8
- (id)updateLibraryFromRevision:(unsigned int)arg1 toRevision:(unsigned int)arg2 withResponse:(id)arg3 clientIdentity:(id)arg4;	// IMP=0x00100000000390c0
- (id)purchaseTokens;	// IMP=0x00100000000390b8
- (id)metadataKeys;	// IMP=0x00100000000390b0
- (id)queryFilter;	// IMP=0x00100000000390a8
- (void)setProgress:(float)arg1;	// IMP=0x001000000003909d
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000038f36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

