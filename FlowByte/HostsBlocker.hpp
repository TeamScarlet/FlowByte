#include <iostream>
#include <string>
#include <vector>
#include <fstream>

namespace hosts_blocker {
    string hostsFilePath = "C:\\Windows\\System32\\drivers\\etc\\hosts";
    void adobe_blocker() {
        vector<string> adobe_url = {
        "127.0.0.1 192.150.14.69",
        "127.0.0.1 192.150.18.101",
        "127.0.0.1 192.150.18.108",
        "127.0.0.1 192.150.22.40",
        "127.0.0.1 192.150.8.100",
        "127.0.0.1 192.150.8.118",
        "127.0.0.1 199.7.52.190",
        "127.0.0.1 199.7.54.72",
        "127.0.0.1 209-34-83-73.ood.opsource.net",
        "127.0.0.1 209.34.83.67",
        "127.0.0.1 209.34.83.73",
        "127.0.0.1 18.207.85.246",
        "127.0.0.1 52.6.155.20",
        "127.0.0.1 52.10.49.85",
        "127.0.0.1 23.22.30.141",
        "127.0.0.1 34.215.42.13",
        "127.0.0.1 52.84.156.37",
        "127.0.0.1 65.8.207.109",
        "127.0.0.1 3.220.11.113",
        "127.0.0.1 3.221.72.231",
        "127.0.0.1 3.216.32.253",
        "127.0.0.1 3.208.248.199",
        "127.0.0.1 3.219.243.226",
        "127.0.0.1 13.227.103.57",
        "127.0.0.1 34.192.151.90",
        "127.0.0.1 34.237.241.83",
        "127.0.0.1 44.240.189.42",
        "127.0.0.1 52.20.222.155",
        "127.0.0.1 52.208.86.132",
        "127.0.0.1 54.208.86.132",
        "127.0.0.1 63.140.38.120",
        "127.0.0.1 63.140.38.160",
        "127.0.0.1 63.140.38.169",
        "127.0.0.1 63.140.38.219",
        "127.0.0.1 18.228.243.121",
        "127.0.0.1 18.230.164.221",
        "127.0.0.1 54.156.135.114",
        "127.0.0.1 54.221.228.134",
        "127.0.0.1 54.224.241.105",
        "127.0.0.1 100.24.211.130",
        "127.0.0.1 162.247.242.20",
        "127.0.0.1 3dns-1.adobe.com",
        "127.0.0.1 3dns-2.adobe.com",
        "127.0.0.1 3dns-3.adobe.com",
        "127.0.0.1 3dns-4.adobe.com",
        "127.0.0.1 3dns-5.adobe.com",
        "127.0.0.1 3dns.adobe.com",
        "127.0.0.1 activate-sea.adobe.com",
        "127.0.0.1 activate-sea.adobe.de",
        "127.0.0.1 activate-sjc0.adobe.com",
        "127.0.0.1 activate-sjc0.adobe.de",
        "127.0.0.1 activate.adobe.com",
        "127.0.0.1 activate.adobe.de",
        "127.0.0.1 activate.wip.adobe.com",
        "127.0.0.1 activate.wip1.adobe.com",
        "127.0.0.1 activate.wip2.adobe.com",
        "127.0.0.1 activate.wip3.adobe.com",
        "127.0.0.1 activate.wip3.adobe.de",
        "127.0.0.1 activate.wip4.adobe.com",
        "127.0.0.1 adobe-dns-1.adobe.com",
        "127.0.0.1 adobe-dns-2.adobe.com",
        "127.0.0.1 adobe-dns-2.adobe.de",
        "127.0.0.1 adobe-dns-3.adobe.com",
        "127.0.0.1 adobe-dns-3.adobe.de",
        "127.0.0.1 adobe-dns-4.adobe.com",
        "127.0.0.1 adobe-dns.adobe.com",
        "127.0.0.1 adobe-dns.adobe.de",
        "127.0.0.1 adobe.activate.com",
        "127.0.0.1 adobeereg.com",
        "127.0.0.1 cmdls.adobe.com",
        "127.0.0.1 crl.verisign.net",
        "127.0.0.1 ereg.adobe.com",
        "127.0.0.1 ereg.adobe.de",
        "127.0.0.1 ereg.wip.adobe.com",
        "127.0.0.1 ereg.wip1.adobe.com",
        "127.0.0.1 ereg.wip2.adobe.com",
        "127.0.0.1 ereg.wip3.adobe.com",
        "127.0.0.1 ereg.wip4.adobe.com",
        "127.0.0.1 genuine.adobe.com",
        "127.0.0.1 hlrcv.stage.adobe.com",
        "127.0.0.1 hl2rcv.adobe.com",
        "127.0.0.1 hl2rcv.adobe.de",
        "127.0.0.1 ims-na1-prprod.adobelogin.com",
        "127.0.0.1 lm.licenses.adobe.com",
        "127.0.0.1 lmlicenses.wip4.adobe.com",
        "127.0.0.1 na1r.services.adobe.com",
        "127.0.0.1 na2m-pr.licenses.adobe.com",
        "127.0.0.1 na2m-stg2.licenses.adobe.com",
        "127.0.0.1 na4r.services.adobe.com",
        "127.0.0.1 ocsp.spo1.verisign.com",
        "127.0.0.1 ood.opsource.net",
        "127.0.0.1 practivate.adobe",
        "127.0.0.1 practivate.adobe.",
        "127.0.0.1 practivate.adobe.com",
        "127.0.0.1 practivate.adobe.de",
        "127.0.0.1 practivate.adobe.ipp",
        "127.0.0.1 practivate.adobe.newoa",
        "127.0.0.1 practivate.adobe.ntp",
        "127.0.0.1 prod-rel-ffc-ccm.oobesaas.adobe.com",
        "127.0.0.1 s-2.adobe.com",
        "127.0.0.1 s-3.adobe.com",
        "127.0.0.1 tss-geotrust-crl.thawte.com",
        "127.0.0.1 uds.licenses.adobe.com",
        "127.0.0.1 dxyeyf6ecy.adobe.io",
        "127.0.0.1 1hzopx6nz7.adobe.io",
        "127.0.0.1 ic.adobe.io",
        "127.0.0.1 p13n.adobe.io",
        "127.0.0.1 ic.adobe.io",
        "127.0.0.1 wip1.adobe.com",
        "127.0.0.1 wip2.adobe.com",
        "127.0.0.1 wip3.adobe.com",
        "127.0.0.1 wip4.adobe.com",
        "127.0.0.1 wwis-dubc1-vip100.adobe.com",
        "127.0.0.1 wwis-dubc1-vip101.adobe.com",
        "127.0.0.1 wwis-dubc1-vip102.adobe.com",
        "127.0.0.1 wwis-dubc1-vip103.adobe.com",
        "127.0.0.1 wwis-dubc1-vip104.adobe.com",
        "127.0.0.1 wwis-dubc1-vip105.adobe.com",
        "127.0.0.1 wwis-dubc1-vip106.adobe.com",
        "127.0.0.1 wwis-dubc1-vip107.adobe.com",
        "127.0.0.1 wwis-dubc1-vip108.adobe.com",
        "127.0.0.1 wwis-dubc1-vip109.adobe.com",
        "127.0.0.1 wwis-dubc1-vip110.adobe.com",
        "127.0.0.1 wwis-dubc1-vip111.adobe.com",
        "127.0.0.1 wwis-dubc1-vip112.adobe.com",
        "127.0.0.1 wwis-dubc1-vip113.adobe.com",
        "127.0.0.1 wwis-dubc1-vip114.adobe.com",
        "127.0.0.1 wwis-dubc1-vip115.adobe.com",
        "127.0.0.1 wwis-dubc1-vip116.adobe.com",
        "127.0.0.1 wwis-dubc1-vip117.adobe.com",
        "127.0.0.1 wwis-dubc1-vip118.adobe.com",
        "127.0.0.1 wwis-dubc1-vip119.adobe.com",
        "127.0.0.1 wwis-dubc1-vip120.adobe.com",
        "127.0.0.1 wwis-dubc1-vip121.adobe.com",
        "127.0.0.1 wwis-dubc1-vip122.adobe.com",
        "127.0.0.1 wwis-dubc1-vip123.adobe.com",
        "127.0.0.1 wwis-dubc1-vip124.adobe.com",
        "127.0.0.1 wwis-dubc1-vip125.adobe.com",
        "127.0.0.1 wwis-dubc1-vip30.adobe.com",
        "127.0.0.1 wwis-dubc1-vip31.adobe.com",
        "127.0.0.1 wwis-dubc1-vip32.adobe.com",
        "127.0.0.1 wwis-dubc1-vip33.adobe.com",
        "127.0.0.1 wwis-dubc1-vip34.adobe.com",
        "127.0.0.1 wwis-dubc1-vip35.adobe.com",
        "127.0.0.1 wwis-dubc1-vip36.adobe.com",
        "127.0.0.1 wwis-dubc1-vip37.adobe.com",
        "127.0.0.1 wwis-dubc1-vip38.adobe.com",
        "127.0.0.1 wwis-dubc1-vip39.adobe.com",
        "127.0.0.1 wwis-dubc1-vip40.adobe.com",
        "127.0.0.1 wwis-dubc1-vip41.adobe.com",
        "127.0.0.1 wwis-dubc1-vip42.adobe.com",
        "127.0.0.1 wwis-dubc1-vip43.adobe.com",
        "127.0.0.1 wwis-dubc1-vip44.adobe.com",
        "127.0.0.1 wwis-dubc1-vip45.adobe.com",
        "127.0.0.1 wwis-dubc1-vip46.adobe.com",
        "127.0.0.1 wwis-dubc1-vip47.adobe.com",
        "127.0.0.1 wwis-dubc1-vip48.adobe.com",
        "127.0.0.1 wwis-dubc1-vip49.adobe.com",
        "127.0.0.1 wwis-dubc1-vip50.adobe.com",
        "127.0.0.1 wwis-dubc1-vip51.adobe.com",
        "127.0.0.1 wwis-dubc1-vip52.adobe.com",
        "127.0.0.1 wwis-dubc1-vip53.adobe.com",
        "127.0.0.1 wwis-dubc1-vip54.adobe.com",
        "127.0.0.1 wwis-dubc1-vip55.adobe.com",
        "127.0.0.1 wwis-dubc1-vip56.adobe.com",
        "127.0.0.1 wwis-dubc1-vip57.adobe.com",
        "127.0.0.1 wwis-dubc1-vip58.adobe.com",
        "127.0.0.1 wwis-dubc1-vip59.adobe.com",
        "127.0.0.1 wwis-dubc1-vip60.adobe.com",
        "127.0.0.1 wwis-dubc1-vip60.adobe.de",
        "127.0.0.1 wwis-dubc1-vip61.adobe.com",
        "127.0.0.1 wwis-dubc1-vip62.adobe.com",
        "127.0.0.1 wwis-dubc1-vip63.adobe.com",
        "127.0.0.1 wwis-dubc1-vip64.adobe.com",
        "127.0.0.1 wwis-dubc1-vip65.adobe.com",
        "127.0.0.1 wwis-dubc1-vip66.adobe.com",
        "127.0.0.1 wwis-dubc1-vip67.adobe.com",
        "127.0.0.1 wwis-dubc1-vip68.adobe.com",
        "127.0.0.1 wwis-dubc1-vip69.adobe.com",
        "127.0.0.1 wwis-dubc1-vip70.adobe.com",
        "127.0.0.1 wwis-dubc1-vip71.adobe.com",
        "127.0.0.1 wwis-dubc1-vip72.adobe.com",
        "127.0.0.1 wwis-dubc1-vip73.adobe.com",
        "127.0.0.1 wwis-dubc1-vip74.adobe.com",
        "127.0.0.1 wwis-dubc1-vip75.adobe.com",
        "127.0.0.1 wwis-dubc1-vip76.adobe.com",
        "127.0.0.1 wwis-dubc1-vip77.adobe.com",
        "127.0.0.1 wwis-dubc1-vip78.adobe.com",
        "127.0.0.1 wwis-dubc1-vip79.adobe.com",
        "127.0.0.1 wwis-dubc1-vip80.adobe.com",
        "127.0.0.1 wwis-dubc1-vip81.adobe.com",
        "127.0.0.1 wwis-dubc1-vip82.adobe.com",
        "127.0.0.1 wwis-dubc1-vip83.adobe.com",
        "127.0.0.1 wwis-dubc1-vip84.adobe.com",
        "127.0.0.1 wwis-dubc1-vip85.adobe.com",
        "127.0.0.1 wwis-dubc1-vip86.adobe.com",
        "127.0.0.1 wwis-dubc1-vip87.adobe.com",
        "127.0.0.1 wwis-dubc1-vip88.adobe.com",
        "127.0.0.1 wwis-dubc1-vip89.adobe.com",
        "127.0.0.1 wwis-dubc1-vip90.adobe.com",
        "127.0.0.1 wwis-dubc1-vip91.adobe.com",
        "127.0.0.1 wwis-dubc1-vip92.adobe.com",
        "127.0.0.1 wwis-dubc1-vip93.adobe.com",
        "127.0.0.1 wwis-dubc1-vip94.adobe.com",
        "127.0.0.1 wwis-dubc1-vip95.adobe.com",
        "127.0.0.1 wwis-dubc1-vip96.adobe.com",
        "127.0.0.1 wwis-dubc1-vip97.adobe.com",
        "127.0.0.1 wwis-dubc1-vip98.adobe.com",
        "127.0.0.1 wwis-dubc1-vip99.adobe.com"
        };

        ofstream hostsFile(hostsFilePath, ios::app);

        if (!hostsFile.is_open()) {
            cerr << "[ FlowByte ] Failed to open hosts file, missing administrator permission? " << endl;
            return;
        }
        else {
            bool failedToBlock = false;

            for (const string& entry : adobe_url) {
                hostsFile << entry << std::endl;
                if (hostsFile.fail()) {
                    failedToBlock = true;
                    break;
                }
            }

            hostsFile.close();

            if (failedToBlock) {
                cout << hue::light_aqua << "[ FlowByte ] Failed to neutralize adobe servers!" << hue::reset << endl;
            }
            else {
                cout << "[ FlowByte ] Adobe servers successfully neutralized!" << endl;
            }
        }
    }
}