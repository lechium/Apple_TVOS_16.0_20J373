//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol MLMediaLibraryResourcesServiceProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _ML3MultiUserMusicLibraryResourcesManager
{
    NSString *_cachedLibraryContainerPath;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    id <MLMediaLibraryResourcesServiceProtocol> _libraryResourcesServices;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001a5eda
@property(retain, nonatomic) id <MLMediaLibraryResourcesServiceProtocol> libraryResourcesServices; // @synthesize libraryResourcesServices=_libraryResourcesServices;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void)terminateForFailureToPerformDatabasePathChange;	// IMP=0x00000000001a5e8a
- (void)emergencyDisconnectWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a5d83
- (void)performDatabasePathChange:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a5c85
@property(copy, nonatomic) NSString *cachedLibraryContainerPath; // @synthesize cachedLibraryContainerPath=_cachedLibraryContainerPath;
- (id)libraryContainerPath;	// IMP=0x00000000001a5708
- (id)initWithLibraryResourcesService:(id)arg1;	// IMP=0x00000000001a5636

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

