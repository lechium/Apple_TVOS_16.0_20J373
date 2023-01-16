//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface SNAudioQualityModelOutput : NSObject
{
    NSDictionary *_final_output;	// 8 = 0x8
    NSString *_classLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000081c8d
@property(retain, nonatomic) NSString *classLabel; // @synthesize classLabel=_classLabel;
@property(retain, nonatomic) NSDictionary *final_output; // @synthesize final_output=_final_output;
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000081b55
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithFinal_output:(id)arg1 classLabel:(id)arg2;	// IMP=0x0000000000081a9c

@end

