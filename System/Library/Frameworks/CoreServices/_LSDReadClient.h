//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSDReadClient
{
}

- (void)getSystemContentStoreWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c7805
- (void)getSessionLanguagesForImproperlyLocalizedProcessWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c763d
- (void)getSettingsStoreConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c74cf
- (void)getPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c7434
- (void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c6d35
- (void)mapBundleIdentifiers:(id)arg1 orMachOUUIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c5d6c
- (void)getResourceValuesForKeys:(id)arg1 URL:(id)arg2 preferredLocalizations:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c5725
- (void)getAllUserActivityTypesAndDomainNamesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c54cc
- (void)getWhetherTypeIdentifier:(id)arg1 conformsToTypeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c540a
- (void)getRelatedTypesOfTypeWithIdentifier:(id)arg1 maximumDegreeOfSeparation:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c5184
- (void)getTypeRecordForImportedTypeWithIdentifier:(id)arg1 conformingToIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c50a7
- (void)getTypeRecordsWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c4f96
- (void)getTypeRecordWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c4e85
- (void)getTypeRecordsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c4da4
- (void)getTypeRecordWithIdentifier:(id)arg1 allowUndeclared:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c4cbf
- (void)getExtensionPointRecordForCurrentProcessWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c4b68
- (void)getExtensionPointRecordWithIdentifier:(id)arg1 platform:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c4a80
- (void)getBundleRecordForCoreTypesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c49c8
- (void)getBundleProxyForCurrentProcessWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c480e
- (void)getBundleRecordForCurrentProcessWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c46de
- (void)resolveQueries:(id)arg1 legacySPI:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c4281
- (void)getKnowledgeUUIDAndSequenceNumberWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c40cd
- (void)getDiskUsage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c3eff
- (void)getKernelPackageExtensionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c3e16
- (void)getServerStoreNonBlockingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c3cac
- (void)getServerStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c3c5f
- (void)willHandleInvocation:(id)arg1 isReply:(_Bool)arg2;	// IMP=0x00000000000c3ba1

@end
