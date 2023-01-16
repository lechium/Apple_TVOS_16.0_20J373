//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSError, NSSet, NSUUID, PBSExternalControlIRLearningManager;

@protocol PBSExternalControlIRLearningManagerDelegate <NSObject>

@optional
- (void)irLearningManager:(PBSExternalControlIRLearningManager *)arg1 didFinishLearningAction:(int)arg2;
- (void)irLearningManager:(PBSExternalControlIRLearningManager *)arg1 didCompleteLearningAction:(int)arg2 withResult:(_Bool)arg3 error:(NSError *)arg4;
- (void)irLearningManager:(PBSExternalControlIRLearningManager *)arg1 didLearnAction:(int)arg2 withProgress:(double)arg3;
- (void)irLearningManager:(PBSExternalControlIRLearningManager *)arg1 willStartLearningAction:(int)arg2;
- (void)irLearningManagerDidCancel:(PBSExternalControlIRLearningManager *)arg1;
- (void)irLearningManager:(PBSExternalControlIRLearningManager *)arg1 didSaveLearnedActions:(NSSet *)arg2 forDeviceWithUUID:(NSUUID *)arg3;
- (void)irLearningManager:(PBSExternalControlIRLearningManager *)arg1 didFailToStartLearningWithError:(NSError *)arg2;
- (void)irLearningManagerDidStartLearning:(PBSExternalControlIRLearningManager *)arg1;
@end
