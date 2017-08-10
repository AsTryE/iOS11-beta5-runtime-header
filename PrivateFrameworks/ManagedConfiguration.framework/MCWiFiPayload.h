/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCWiFiPayload : MCPayload {
    NSString * _HESSID;
    NSArray * _MCCAndMNCs;
    NSArray * _NAIRealmNames;
    bool  _autoJoin;
    NSNumber * _autoJoinNum;
    bool  _captiveBypass;
    NSNumber * _captiveBypassNum;
    NSString * _certificateUUID;
    NSString * _credentialUUID;
    NSString * _displayedOperatorName;
    NSString * _domainName;
    NSDictionary * _eapClientConfig;
    NSString * _encryptionType;
    NSNumber * _isFirstAutoJoinRestricted;
    bool  _isHidden;
    NSNumber * _isHiddenNum;
    bool  _isHotspot;
    NSNumber * _isHotspotNum;
    bool  _isWEP;
    bool  _isWPA;
    NSString * _password;
    bool  _passwordRequired;
    NSArray * _payloadCertificateAnchorUUID;
    NSNumber * _priority;
    bool  _proxyPACFallbackAllowed;
    NSNumber * _proxyPACFallbackAllowedNum;
    NSString * _proxyPACURLString;
    NSString * _proxyPassword;
    NSString * _proxyServer;
    NSNumber * _proxyServerPort;
    int  _proxyType;
    NSString * _proxyUsername;
    NSDictionary * _qosMarkingConfig;
    NSArray * _roamingConsortiumOIs;
    bool  _serviceProviderRoamingEnabled;
    NSNumber * _serviceProviderRoamingEnabledNum;
    NSString * _ssid;
    NSString * _username;
    bool  _usernameRequired;
}

@property (nonatomic, retain) NSString *HESSID;
@property (nonatomic, retain) NSArray *MCCAndMNCs;
@property (nonatomic, retain) NSArray *NAIRealmNames;
@property (nonatomic) bool autoJoin;
@property (nonatomic, retain) NSNumber *autoJoinNum;
@property (nonatomic) bool captiveBypass;
@property (nonatomic, retain) NSNumber *captiveBypassNum;
@property (nonatomic, retain) NSString *certificateUUID;
@property (nonatomic, retain) NSString *credentialUUID;
@property (nonatomic, retain) NSString *displayedOperatorName;
@property (nonatomic, retain) NSString *domainName;
@property (nonatomic, retain) NSDictionary *eapClientConfig;
@property (nonatomic, retain) NSString *encryptionType;
@property (nonatomic) NSNumber *isFirstAutoJoinRestricted;
@property (nonatomic) bool isHidden;
@property (nonatomic, retain) NSNumber *isHiddenNum;
@property (nonatomic) bool isHotspot;
@property (nonatomic, retain) NSNumber *isHotspotNum;
@property (nonatomic) bool isWEP;
@property (nonatomic) bool isWPA;
@property (nonatomic, retain) NSString *password;
@property (nonatomic) bool passwordRequired;
@property (nonatomic, retain) NSArray *payloadCertificateAnchorUUID;
@property (nonatomic, retain) NSNumber *priority;
@property (nonatomic) bool proxyPACFallbackAllowed;
@property (nonatomic, retain) NSNumber *proxyPACFallbackAllowedNum;
@property (nonatomic, retain) NSString *proxyPACURLString;
@property (nonatomic, retain) NSString *proxyPassword;
@property (nonatomic, retain) NSString *proxyServer;
@property (nonatomic, retain) NSNumber *proxyServerPort;
@property (nonatomic) int proxyType;
@property (nonatomic, retain) NSString *proxyUsername;
@property (nonatomic, retain) NSDictionary *qosMarkingConfig;
@property (nonatomic, retain) NSArray *roamingConsortiumOIs;
@property (getter=isServiceProviderRoamingEnabled, nonatomic) bool serviceProviderRoamingEnabled;
@property (nonatomic, retain) NSNumber *serviceProviderRoamingEnabledNum;
@property (nonatomic, retain) NSString *ssid;
@property (nonatomic, retain) NSString *username;
@property (nonatomic) bool usernameRequired;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)HESSID;
- (id)MCCAndMNCs;
- (id)NAIRealmNames;
- (bool)_eapConfigIsValid:(id)arg1 error:(id*)arg2;
- (id)_eapPasswordFromConfig:(id)arg1 isRequired:(bool*)arg2;
- (id)_eapUsernameFromConfig:(id)arg1 isRequired:(bool*)arg2;
- (bool)_isEAPSIMConfig:(id)arg1;
- (id)_localizedEncryptionTypeString;
- (bool)_qosMarkingConfigIsValid:(id)arg1 error:(id*)arg2;
- (bool)autoJoin;
- (id)autoJoinNum;
- (bool)captiveBypass;
- (id)captiveBypassNum;
- (id)certificateUUID;
- (id)credentialUUID;
- (id)description;
- (id)displayedOperatorName;
- (id)domainName;
- (id)eapClientConfig;
- (id)encryptionType;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)isFirstAutoJoinRestricted;
- (bool)isHidden;
- (id)isHiddenNum;
- (bool)isHotspot;
- (id)isHotspotNum;
- (bool)isServiceProviderRoamingEnabled;
- (bool)isWEP;
- (bool)isWPA;
- (id)password;
- (bool)passwordRequired;
- (id)payloadCertificateAnchorUUID;
- (id)payloadDescriptionKeyValueSections;
- (id)priority;
- (bool)proxyPACFallbackAllowed;
- (id)proxyPACFallbackAllowedNum;
- (id)proxyPACURLString;
- (id)proxyPassword;
- (id)proxyServer;
- (id)proxyServerPort;
- (int)proxyType;
- (id)proxyUsername;
- (id)qosMarkingConfig;
- (id)roamingConsortiumOIs;
- (id)serviceProviderRoamingEnabledNum;
- (void)setAutoJoin:(bool)arg1;
- (void)setAutoJoinNum:(id)arg1;
- (void)setCaptiveBypass:(bool)arg1;
- (void)setCaptiveBypassNum:(id)arg1;
- (void)setCertificateUUID:(id)arg1;
- (void)setCredentialUUID:(id)arg1;
- (void)setDisplayedOperatorName:(id)arg1;
- (void)setDomainName:(id)arg1;
- (void)setEapClientConfig:(id)arg1;
- (void)setEncryptionType:(id)arg1;
- (void)setHESSID:(id)arg1;
- (void)setIsFirstAutoJoinRestricted:(id)arg1;
- (void)setIsHidden:(bool)arg1;
- (void)setIsHiddenNum:(id)arg1;
- (void)setIsHotspot:(bool)arg1;
- (void)setIsHotspotNum:(id)arg1;
- (void)setIsWEP:(bool)arg1;
- (void)setIsWPA:(bool)arg1;
- (void)setMCCAndMNCs:(id)arg1;
- (void)setNAIRealmNames:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordRequired:(bool)arg1;
- (void)setPayloadCertificateAnchorUUID:(id)arg1;
- (void)setPriority:(id)arg1;
- (void)setProxyPACFallbackAllowed:(bool)arg1;
- (void)setProxyPACFallbackAllowedNum:(id)arg1;
- (void)setProxyPACURLString:(id)arg1;
- (void)setProxyPassword:(id)arg1;
- (void)setProxyServer:(id)arg1;
- (void)setProxyServerPort:(id)arg1;
- (void)setProxyType:(int)arg1;
- (void)setProxyUsername:(id)arg1;
- (void)setQosMarkingConfig:(id)arg1;
- (void)setRoamingConsortiumOIs:(id)arg1;
- (void)setServiceProviderRoamingEnabled:(bool)arg1;
- (void)setServiceProviderRoamingEnabledNum:(id)arg1;
- (void)setSsid:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setUsernameRequired:(bool)arg1;
- (id)ssid;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)userInputFields;
- (id)username;
- (bool)usernameRequired;

@end
