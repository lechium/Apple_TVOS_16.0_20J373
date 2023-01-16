//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoardServices/RBSDomainAttribute.h>

@interface RBSDomainAttribute (RBProcessState)
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;	// IMP=0x0070000000076ec6
- (void)applyToAcquisitionContext:(id)arg1;	// IMP=0x0070000000076d64
- (id)effectiveAttributesWithContext:(id)arg1;	// IMP=0x0070000000076b60
- (void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x00700000000768ae
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x00700000000764f3
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x00700000000762dc
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x0070000000075d24
@end
