//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SagaArtworkImporter
{
}

- (void)_importOriginalContainerArtworkWithClientIdentity:(id)arg1;	// IMP=0x00400000000fd63f
- (void)_importOriginalItemArtworkWithClientIdentity:(id)arg1;	// IMP=0x00100000000fd53b
- (void)importContainerArtworkForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fd256
- (void)importScreenshotForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fcf24
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fcbf2
- (void)importAllItemArtworkWithClientIdentity:(id)arg1;	// IMP=0x00100000000fcb9d
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000000fcb69

@end

