//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TVCKCloudItemQueryHandler
{
}

+ (id)_tvckDataTypeForMLMediaType:(unsigned int)arg1;	// IMP=0x008000000001c1b3
+ (id)_mlPropertiesForATVProperties:(id)arg1;	// IMP=0x008000000001bb90
+ (_Bool)_evaluateNumericFilter:(id)arg1 dataToTest:(unsigned long long)arg2;	// IMP=0x008000000001b540
+ (id)_bookmarkForStoreID:(id)arg1 mediaType:(id)arg2;	// IMP=0x008000000001b430
+ (id)atvMediaItemsForTrackIDs:(id)arg1 mlLibrary:(id)arg2 dataClient:(id)arg3 propertiesRequested:(id)arg4;	// IMP=0x0080000000018403
+ (id)atvMediaItemsForCloudIDs:(id)arg1 mlLibrary:(id)arg2 dataClient:(id)arg3 propertiesRequested:(id)arg4;	// IMP=0x0080000000018018
+ (id)mlPropertyForATVProperty:(id)arg1;	// IMP=0x0080000000017f52
+ (id)mlPredicatePropertyForATVProperty:(id)arg1;	// IMP=0x0080000000017c4f
+ (id)mlQueryPropertyForATVProperty:(id)arg1;	// IMP=0x00800000000173bc
- (unsigned long long)_filterContainerTypeFromDataFilter:(id)arg1;	// IMP=0x000000000001c124
- (unsigned long long)_filterContainerTypeFromQuery:(id)arg1;	// IMP=0x000000000001be6c
- (id)_orderingTermsForProperty:(id)arg1;	// IMP=0x000000000001b7cf
- (void)_setValue:(id)arg1 forKey:(id)arg2 inResponseBuffer:(id)arg3;	// IMP=0x000000000001b618
- (void)_handleDAAPQuery:(id)arg1;	// IMP=0x00000000000197e5
- (void)_handleQuery:(id)arg1;	// IMP=0x0000000000018a51
- (id)_mlQueryForATVMediaQuery:(id)arg1 playlist:(id *)arg2 usingSections:(_Bool *)arg3;	// IMP=0x00000000000185f0
- (void)handleQuery:(id)arg1 withContext:(void *)arg2;	// IMP=0x0000000000017364

@end
