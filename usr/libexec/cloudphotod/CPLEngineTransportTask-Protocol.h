//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MISSING_TYPE;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@protocol CPLEngineTransportTask <NSObject>
@property(retain, nonatomic) id fetchCache;
@property(nonatomic) _Bool allowsFetchCache;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(nonatomic) _Bool foreground;
- (void)cancelIfBlocked;
- (void)cancel;
- (MISSING_TYPE *)runWithinSyncSession: /* Error: Ran out of types for this method. */;
- (void)runWithNoSyncSession;
@end

