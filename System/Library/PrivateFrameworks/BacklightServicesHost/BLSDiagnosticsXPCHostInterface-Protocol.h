//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@class BLSDiagnosticFlipbookFrame, NSArray, NSUUID;
@protocol __BLSDiagnosticFlipbookFrame__;

@protocol BLSDiagnosticsXPCHostInterface <NSObject>
- (oneway void)releaseFrameUUID:(NSUUID *)arg1;
- (oneway void)releaseSurfaceForFrameUUID:(NSUUID *)arg1;
- (void)surfaceForFrameUUID:(NSUUID *)arg1 reply:(void (^)(NSObject<OS_xpc_object> *, NSError *))arg2;
- (BLSDiagnosticFlipbookFrame *)frameOnGlassWhenFlipbookLastCancelled;
- (NSArray<__BLSDiagnosticFlipbookFrame__> *)allFlipbookFrames;
@end

