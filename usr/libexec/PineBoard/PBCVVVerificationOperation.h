//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSString, NSURL;

@interface PBCVVVerificationOperation : ISOperation
{
    CDUnknownBlockType _completion;	// 96 = 0x60
    NSString *_customerTitle;	// 104 = 0x68
    NSString *_customerMessage;	// 112 = 0x70
    NSURL *_verifyURL;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0020000000151d68
@property(retain, nonatomic) NSURL *verifyURL; // @synthesize verifyURL=_verifyURL;
@property(retain, nonatomic) NSString *customerMessage; // @synthesize customerMessage=_customerMessage;
@property(retain, nonatomic) NSString *customerTitle; // @synthesize customerTitle=_customerTitle;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)textEntryDidCancel:(id)arg1;	// IMP=0x0010000000151c16
- (void)textEntry:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2;	// IMP=0x0010000000151b04
- (void)presentFailureAlertWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000151833
- (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001515c6
- (id)_copyResponseWithCode:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000151247
- (_Bool)_verifyCVVCode:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000150d8c
- (id)_copyCVVCodeFromUser;	// IMP=0x0010000000150bbd
- (void)run;	// IMP=0x0010000000150934

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

