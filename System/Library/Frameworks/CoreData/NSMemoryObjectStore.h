//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSMemoryObjectStore
{
}

+ (id)metadataForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0080000000105bcc
+ (_Bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0080000000105b8c
+ (_Bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;	// IMP=0x0080000000105b74
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000105b5d
- (void)_preflightCrossCheck;	// IMP=0x0000000000105c0c
- (id)type;	// IMP=0x0000000000105b4d
- (void)saveDocumentToPath:(id)arg1;	// IMP=0x0000000000105b47
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;	// IMP=0x000000000010594e

@end

