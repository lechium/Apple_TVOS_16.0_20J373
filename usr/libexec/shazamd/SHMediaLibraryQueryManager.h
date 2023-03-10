//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SHAttribution, SHMediaLibraryController;
@protocol SHWorkerDelegate;

@interface SHMediaLibraryQueryManager : NSObject
{
    _Bool _isRunning;	// 8 = 0x8
    id <SHWorkerDelegate> _workerDelegate;	// 16 = 0x10
    SHMediaLibraryController *_libraryController;	// 24 = 0x18
    SHAttribution *_attribution;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000028e21
@property(readonly, nonatomic) SHAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) __weak id <SHWorkerDelegate> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
// Error: Property attributes should begin with the type ('T') attribute, property name: libraryController
// Property attributes: (null)

- (double)timeRequiredToPerformWork;	// IMP=0x0010000000028d1e
@property(readonly, nonatomic) _Bool managesRecordingSession;
- (oneway void)stop;	// IMP=0x0010000000028cfc
- (void)setIsRunning:(_Bool)arg1;	// IMP=0x0010000000028ca7
- (void)_queryLibraryWithParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000028b38
- (void)_libraryInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000289e6
- (id)initWithAttribution:(id)arg1;	// IMP=0x001000000002897b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

