/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentCredential : NSObject {
    int _credentialType;
    PKPaymentEligibilityResponse *_eligibilityResponse;
    NSString *_expiration;
    NSString *_longDescription;
    PKPaymentRequirementsResponse *_requirementsResponse;
    NSString *_sanitizedPrimaryAccountNumber;
}

@property (nonatomic) int credentialType;
@property (nonatomic, retain) PKPaymentEligibilityResponse *eligibilityResponse;
@property (nonatomic, copy) NSString *expiration;
@property (nonatomic, copy) NSString *longDescription;
@property (nonatomic, retain) PKPaymentRequirementsResponse *requirementsResponse;
@property (nonatomic, copy) NSString *sanitizedPrimaryAccountNumber;

- (int)credentialType;
- (void)dealloc;
- (id)eligibilityResponse;
- (id)expiration;
- (BOOL)isLocalPassCredential;
- (BOOL)isRemoteCredential;
- (id)localPassCredential;
- (id)longDescription;
- (id)remoteCredential;
- (id)requirementsResponse;
- (id)sanitizedPrimaryAccountNumber;
- (void)setCredentialType:(int)arg1;
- (void)setEligibilityResponse:(id)arg1;
- (void)setExpiration:(id)arg1;
- (void)setLongDescription:(id)arg1;
- (void)setRequirementsResponse:(id)arg1;
- (void)setSanitizedPrimaryAccountNumber:(id)arg1;

@end