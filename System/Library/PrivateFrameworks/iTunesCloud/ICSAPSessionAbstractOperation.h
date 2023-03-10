//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ICAsyncOperation.h"

@class ICSAPSession;

__attribute__((visibility("hidden")))
@interface ICSAPSessionAbstractOperation : ICAsyncOperation
{
    ICSAPSession *_sapSession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000015c9b9
@property(retain, nonatomic) ICSAPSession *sapSession; // @synthesize sapSession=_sapSession;
- (void)finishWithError:(id)arg1;	// IMP=0x000000000015c965
- (void)finishWithSAPContextPreparationError:(id)arg1;	// IMP=0x000000000015c95f
- (void)executeWithSAPContext:(id)arg1;	// IMP=0x000000000015c959
- (void)execute;	// IMP=0x000000000015c808

@end

