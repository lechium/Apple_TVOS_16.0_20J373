//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _VNUnspecifiedOperationPoints
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0080000000129227
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000128dd8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000128dd2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000128d87
- (_Bool)getRecall:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;	// IMP=0x0000000000128d1f
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withRecall:(float)arg3 error:(id *)arg4;	// IMP=0x0000000000128ced
- (_Bool)getPrecision:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;	// IMP=0x0000000000128cbb
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withPrecision:(float)arg3 error:(id *)arg4;	// IMP=0x0000000000128c89
- (_Bool)getDefaultConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000128c57

@end

