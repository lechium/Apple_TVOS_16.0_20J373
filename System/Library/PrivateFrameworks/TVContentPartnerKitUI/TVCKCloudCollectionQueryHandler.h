//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TVCKCloudCollectionQueryHandler
{
}

- (float)_durationOfAlbum:(unsigned long long)arg1;	// IMP=0x00000000000b16f0
- (void)_handleDAAPQuery:(id)arg1;	// IMP=0x00000000000b0d69
- (void)_handleQuery:(id)arg1;	// IMP=0x00000000000b02ba
- (id)_mlQueryForATVMediaQuery:(id)arg1 usingSections:(_Bool)arg2;	// IMP=0x00000000000b01d4
- (Class)collectionClass;	// IMP=0x00000000000b01cc
- (Class)entityClass;	// IMP=0x00000000000b01c4
- (unsigned long long)dmapResponseHeaderCode;	// IMP=0x00000000000b01bc
- (id)blankProperty;	// IMP=0x00000000000b01b4
- (id)foreignPersistentIDProperty;	// IMP=0x00000000000b01ac
- (id)orderingTermsForProperty:(id)arg1;	// IMP=0x00000000000b01a4
- (void)handleQuery:(id)arg1 withContext:(void *)arg2;	// IMP=0x00000000000b014c

@end

