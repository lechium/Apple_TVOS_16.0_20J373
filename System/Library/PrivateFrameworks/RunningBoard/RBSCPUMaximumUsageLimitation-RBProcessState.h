//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoardServices/RBSCPUMaximumUsageLimitation.h>

@interface RBSCPUMaximumUsageLimitation (RBProcessState)
- (_Bool)allowedWithAttribute:(id)arg1 error:(id *)arg2;	// IMP=0x00600000000488cc
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000000488b3
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x0060000000048793
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x00600000000486f7
@end

