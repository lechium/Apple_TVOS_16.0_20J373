//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PLPhotoLibraryBundle, PLXPCTransaction;
@protocol OS_xpc_object;

@interface PLLibraryRepairSupport : NSObject
{
    NSObject<OS_xpc_object> *_xpcActivity;	// 8 = 0x8
    PLXPCTransaction *_transaction;	// 16 = 0x10
    NSString *_description;	// 24 = 0x18
    PLPhotoLibraryBundle *_bundle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000006c37
@property(retain) PLPhotoLibraryBundle *bundle; // @synthesize bundle=_bundle;
- (void)runPeriodicMaintenanceActivityOnAllLibrariesWithExecutionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006525
- (void)_maintainLibrary:(id)arg1 executionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005f51
- (_Bool)_updateDeferredCriticalMaintenanceTaskMarker:(id)arg1;	// IMP=0x0010000000005ec9
- (_Bool)_updateDeferredMaintenanceTaskMarker:(id)arg1 value:(id)arg2;	// IMP=0x0010000000005ead
- (_Bool)_updateMaintenanceTaskMarker:(id)arg1 key:(id)arg2 value:(id)arg3;	// IMP=0x0010000000005d8d
- (_Bool)_isValidProcessingURL:(id)arg1 interruptedPaths:(id)arg2;	// IMP=0x0010000000005cf2
- (id)_interruptedProcessingURLs;	// IMP=0x0010000000005c3a
- (void)_saveInterruptedProcessingURLs:(id)arg1;	// IMP=0x0010000000005b90
- (id)_buildIncompleteMaintenanceTaskPathsKey;	// IMP=0x0010000000005ac3
- (void)runPeriodicMaintenance;	// IMP=0x0010000000005578
- (void)runCuratedLibraryPeriodicMaintenanceTasks;	// IMP=0x001000000000548e
- (_Bool)_runCriticalPeriodicMaintenanceTasksDeferActivityIfRequired:(id)arg1;	// IMP=0x0010000000005319
- (_Bool)_deferActivityIfRequiredForClassName:(id)arg1;	// IMP=0x001000000000515b
- (unsigned long long)_indexOfRegisteredMaintenanceTaskForMarker:(id)arg1;	// IMP=0x0010000000005070
- (id)_registeredMaintenanceTaskClasses;	// IMP=0x0010000000004ecd
- (id)_registeredCriticalMaintenaceTaskClasses;	// IMP=0x0010000000004e3c
- (id)initWithActivity:(id)arg1 description:(id)arg2;	// IMP=0x0010000000004d61

@end

