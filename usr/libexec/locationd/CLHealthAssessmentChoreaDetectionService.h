//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CLHealthAssessmentResultDelegate;

@interface CLHealthAssessmentChoreaDetectionService
{
    id <CLHealthAssessmentResultDelegate> _delegate;	// 8 = 0x8
}

@property(nonatomic) id <CLHealthAssessmentResultDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onResultAvailable:(struct ChoreaScore)arg1;	// IMP=0x00100000003c6468
- (void)feedTremor:(id)arg1;	// IMP=0x00100000003c637e
- (void)feedGyro:(id)arg1;	// IMP=0x00100000003c6378
- (void)feedAccelSample:(CDStruct_869f9c67)arg1 time:(double)arg2;	// IMP=0x00100000003c634f
- (void)dealloc;	// IMP=0x00100000003c62bd
- (id)init;	// IMP=0x00100000003c6188

@end
