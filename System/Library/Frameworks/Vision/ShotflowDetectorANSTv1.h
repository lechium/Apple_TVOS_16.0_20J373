//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShotflowDetectorANSTv1
{
}

+ (id)filterThresholds;	// IMP=0x00800000000ffa00
+ (Class)shotflowNetworkClass;	// IMP=0x00800000000ff9ef
+ (id)supportedLabelKeys;	// IMP=0x00800000000ff98c
- (id)nmsBoxes:(id)arg1;	// IMP=0x000000000010076e
- (id)getIndexBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2;	// IMP=0x0000000000100699
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;	// IMP=0x000000000010050d
- (id)modifySmallFaceThrehold:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;	// IMP=0x00000000000ffb46
- (id)initWithNetwork:(id)arg1;	// IMP=0x00000000000ffaf1
- (id)initWithNetwork:(id)arg1 filterThresholds:(id)arg2;	// IMP=0x00000000000ffa9c

@end
