//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSUIWebModel : NSObject
{
}

+ (struct CGSize)windowSizeFromJSObject:(id)arg1 key:(id)arg2;	// IMP=0x008000000007aff4
+ (struct CGSize)windowSizeFromPageModel:(id)arg1;	// IMP=0x008000000007afdb
+ (id)pageModelFromJSObject:(id)arg1 context:(id)arg2;	// IMP=0x008000000007ac7d
+ (id)navigationBarFromPageModel:(id)arg1 context:(id)arg2;	// IMP=0x008000000007abd4
+ (id)impressionEventFromPageModel:(id)arg1 context:(id)arg2;	// IMP=0x008000000007ab13
+ (id)backgroundColorFromPageModel:(id)arg1;	// IMP=0x008000000007aaa9

@end
